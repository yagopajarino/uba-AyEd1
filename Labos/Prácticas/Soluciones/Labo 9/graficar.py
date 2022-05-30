import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import argparse


def main(input, salida, guia):
    df = pd.read_csv(input, sep=",", index_col="n")
    ax = plt.subplot()

    df.plot(ax=ax, marker="*", lw=0)
    ax.set_ylabel("tiempo (s)")
    ax.legend(loc=2)

    if guia:
        ax2 = ax.twinx()
        if guia == "sqrt":
            fn = np.sqrt
            label = "sqrt(n)"
        if guia == "logn":
            fn = np.log
            label = "log(n)"
        if guia == "n":
            fn = lambda n: n
            label = "n"
        if guia == "nlogn":
            fn = lambda n: n * np.log(n)
            label = "n.log(n)"
        if guia == "n2":
            fn = lambda n: n ** 2
            label = "n**2"
        if guia == "n3":
            fn = fn = lambda n: n ** 3
            label = "n**3"
        if guia == "2**n":
            fn = fn = lambda n: 2 ** n
            label = "2**n"
        print(df.index)
        ax2.plot(df.index, [fn(n) for n in df.index], "--k", label=label)
        ax2.legend(loc=1)
    plt.tight_layout()
    plt.savefig(salida)
    print("salida guardada en {}".format(salida))

    plt.show()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="graficador!")
    parser.add_argument("-i", "--input", required=True)
    parser.add_argument("-o", "--salida", default="mediciones.png")
    parser.add_argument("-g", "--guia", choices=["sqrt", "logn", "n", "n2", "n3", "nlogn", "2**n"])
    args = parser.parse_args()
    main(**vars(args))
