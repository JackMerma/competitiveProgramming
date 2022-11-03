#include <gtest/gtest.h>
#include "arrayStack.cc"
#define FOR(a, b, c) for(int i = a; i < b; i += 1)

class test : public :: testing :: Test{
    protected:
        arrayStack<int> *s1;
        virtual void SetUp(){
            s1 = new arrayStack<int>(5);

            int num=1;
            FOR(0, 10, 1)
                s1->push(num++);
        }
        virtual void TearDown(){
            delete s1; s1 = nullptr;
        }
};

TEST_F(test, TotalEmptyStack){
    FOR(0, 10, 1){
        EXPECT_NO_THROW({
            s1->pop();
        });
    }
}

TEST_F(test, NoTopValue){
    arrayStack<long> s2(1);
    ASSERT_THROW(s2.top(), const char*);
}

TEST_F(test, SameTopValue){
    EXPECT_EQ(10, s1->top());
}

TEST_F(test, SameLength){
    EXPECT_EQ(10, s1->length());
}

TEST_F(test, SingularCase){
    arrayStack<char> s2(4);
    EXPECT_TRUE(s2.empty());
    s2.push('q');
    EXPECT_FALSE(s2.empty());
}

int main(){
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
