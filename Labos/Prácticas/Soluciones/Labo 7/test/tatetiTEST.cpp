#include "../ejercicios.h"
#include "gtest/gtest.h"

// Voy a testear cualquier caso de finalización

TEST(tateti, empate){
    vector<vector <int>> m={
            {1,0,1},
            {0,0,1},
            {0,1,0}
    };
    EXPECT_EQ(tateti(m), 2);
}

TEST(tateti, noHuboMovimientos){
    vector<vector <int>> m={
            {-1,-1,-1},
            {-1,-1,-1},
            {-1,-1,-1}
    };
    EXPECT_EQ(tateti(m), 3);
}


TEST(tateti, noFinalizada){
    vector<vector <int>> m={
            {1,-1,-1},
            {1,0,-1},
            {0,-1,0}
    };
    EXPECT_EQ(tateti(m), 3);
}

TEST(tateti, ganaUnoVertical){
    vector<vector <int>> m={
            {1,0,1},
            {-1,0,-1},
            {0,0,1}
    };
    EXPECT_EQ(tateti(m), 0);
}

TEST(tateti, ganaDosVertical){
    vector<vector <int>> m={
            {1,-1,0},
            {1,0,-1},
            {1,-1,0}
    };
    EXPECT_EQ(tateti(m), 1);
}

TEST(tateti, ganaUnoHorizontal){
    vector<vector <int>> m={
            {1,-1,-1},
            {0,0,0},
            {0,1,1}
    };
    EXPECT_EQ(tateti(m), 0);
}

TEST(tateti, ganaDosHorizontal){
    vector<vector <int>> m={
            {0,-1,0},
            {-1,0,-1},
            {1,1,1}
    };
    EXPECT_EQ(tateti(m), 1);
}

TEST(tateti, ganaUnoDiagonal){
    vector<vector <int>> m={
            {0,-1,-1},
            {1,0,-1},
            {1,-1,0}
    };
    EXPECT_EQ(tateti(m), 0);
}


TEST(tateti, ganaUnoAlFinal){
    vector<vector <int>> m={
            {1,0,1},
            {0,0,1},
            {1,0,0}
    };
    EXPECT_EQ(tateti(m), 0);
}