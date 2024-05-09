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
			// ��������� ��������� �������� ������
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

			// ��������� �������� ����������� �������
			int expectedDepth = 3;

			// ������ ������� ��� ����������
			int actualDepth = MaxDepth(root);

			// �������� �� ��������� � ���������� �����������
			Assert::AreEqual(expectedDepth, actualDepth);

			// �������� ���'��
			DeleteTree(root);
		}

	};
}
