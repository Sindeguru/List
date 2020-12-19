#include "list.h"

#include "../gtest/gtest.h"

TEST(TLlist, insFirst_in_empty_list)
{
	TList<int> A;
	ASSERT_NO_THROW(A.InsFirst(1));
}

TEST(TLlist, insLast_in_empty_list)
{
	TList<int> A;
	ASSERT_NO_THROW(A.InsLast(1));
}

TEST(TLlist, insFirst_in_list_with_elements)
{
	TList<int> A;
	A.InsFirst(132);
	ASSERT_NO_THROW(A.InsFirst(1));
}

TEST(TLlist, insLast_in_list_with_elements)
{
	TList<int> A;
	A.InsFirst(132);
	ASSERT_NO_THROW(A.InsLast(1));
}

TEST(TLlist, DelLast_in_empty_list)
{
	TList<int> A;
	ASSERT_ANY_THROW(A.DellLast());
}

TEST(TLlist, DelFist_in_empty_list)
{
	TList<int> A;
	ASSERT_ANY_THROW(A.DellFirst());
}

TEST(TLlist, DelLast_in_list_with_elements)
{
	TList<int> A;
	A.InsLast(132);
	ASSERT_NO_THROW(A.DellLast());
}

TEST(TLlist, DelFist_in_list_with_elements)
{
	TList<int> A;
	A.InsFirst(132);
	ASSERT_NO_THROW(A.DellFirst());
}

TEST(TList, true_count)
{
	TList<int> A;
	A.InsFirst(123124);
	A.InsFirst(123124);
	A.InsFirst(123124);
	ASSERT_EQ(A.GetCount(), 3);
}

TEST(TList, IsEmpty)
{
	TList<int> A;
	ASSERT_EQ(A.IsEmpty(), 1);
}