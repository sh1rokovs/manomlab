#include "D:\Git\manomlab\Project10\TPolinom.h"
#include "D:\Git\manomlab\Project10\THeadList.h"
#include "gtest.h"

TEST(THeadList, can_add_first)
{
	THeadList<int> a;
	ASSERT_NO_THROW(a.InsFirst(1));

}

TEST(THeadList, can_add_last)
{
    THeadList<int> a;
	ASSERT_NO_THROW(a.InsLast(1));
}

TEST(THeadList, can_add_curr)
{
	THeadList<int> a;
	ASSERT_NO_THROW(a.InsCurr(1));
}
TEST(THeadList, can_del_first)
{
	 THeadList<int> a;
	 a.InsFirst(1);

	ASSERT_NO_THROW(a.DelFirst());
}
//TEST(TList, can_del_last)
//{
//	THeadList<int> a;
//	 a.InsLast(1);

//	ASSERT_NO_THROW(a.DelLast());
//}
TEST(THeadList, cant_del_curr)
{
	THeadList<int> a;
	 a.InsCurr(1);

	ASSERT_NO_THROW(a.DelCurr());
}
TEST(THeadList, can_take_val)
{
	THeadList<int> a;
	a.InsFirst(5);

	EXPECT_EQ(5, a.GetElem());
}
TEST(THeadList, can_check_list_is_empty)
{
	 THeadList<int> a;
	 a.InsFirst(5);
	 EXPECT_EQ(false, a.IsEmpty());

}
//TEST(TList, can_use_sort_input)
//{
	// THeadList<int> a;
	//a.sortInput(5);
	//a.sortInput(2);
	//a.sortInput(1);
	//a.sortInput(7);
	//a.sortInput(3);
	//a.sortInput(4);
	//a.sortInput(8);
	//a.sortInput(6);
	//a.sortInput(3);
	//a.Reset();
	//EXPECT_EQ(1, a.GetElem());
//}


