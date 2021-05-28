#include <list.h>
#include <gtest.h>
TEST(Heap, can_create_heap)
{
	ASSERT_NO_THROW(Heap<int>(2));
}

TEST(DHeap, can_create_copied)
{
	Heap<int> heap(2);
	ASSERT_NO_THROW(Heap<int>(heap));
}

TEST(Heap, can_insert)
{
	Heap<int> heap(2);
	ASSERT_NO_THROW(heap.Insert(3, 5));
}

TEST(Heap, cant_find_parent)
{
	Heap<int> H(2);
	EXPECT_NO_THROW(H.Parent(0));
}
TEST(Heap, can_delete_min_element)
{
	Heap<int> heap(2);
	heap.Insert(3, 5);
	heap.Insert(4, 6);
	ASSERT_NO_THROW(heap.DeleteMin());
}