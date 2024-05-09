#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12_9/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestMaxDepth)
		{
			// Створення тестового бінарного дерева
			Node* root = new Node;
			root->info = 1;
			root->left = new Node;
			root->left->info = 2;
			root->left->left = nullptr;
			root->left->right = nullptr;
			root->right = new Node;
			root->right->info = 3;
			root->right->left = nullptr;
			root->right->right = new Node;
			root->right->right->info = 4;
			root->right->right->left = nullptr;
			root->right->right->right = nullptr;

			// Очікуване значення максимальної глибини
			int expectedDepth = 3;

			// Виклик функції для тестування
			int actualDepth = MaxDepth(root);

			// Перевірка на співпадіння з очікуваним результатом
			Assert::AreEqual(expectedDepth, actualDepth);

			// Очищення пам'яті
			DeleteTree(root);
		}

	};
}
