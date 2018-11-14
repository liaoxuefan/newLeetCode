//#include<iostream>
//#include<set>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* pre;
//	bool isValidBST(TreeNode* root){
//		int res=1;
//		pre=NULL;
//		inorder(root,res);
//		if(res==1){
//			return true;
//		}else{
//			return false;
//		}
//	}
//	void inorder(TreeNode* root,int &res){
//		if(!root){
//			return ;
//		}
//		inorder(root->left,res);
//		if(pre==NULL){
//			pre=root;
//		}else{
//			if(pre->val>=root->val){
//				res=0;
//			}
//			pre=root;
//		}
//		inorder(root->right,res);
//	}
//	
//    /*bool isValidBST(TreeNode* root) {
//        if(!root){
//			return true;
//		}
//		if(isValidBST2(root->left).lower_bound(root->val)!=isValidBST2(root->left).end()){
//			return false;
//		}
//		if(*isValidBST2(root->right).begin()<=root->val){
//			return false;
//		}
//		return isValidBST(root->left)&&isValidBST(root->right);
//    }
//	set<int> isValidBST2(TreeNode* root){
//		set<int> set;
//		if(!root){
//			return set;
//		}else{
//			set.insert(root->val);
//		}
//		set.insert(isValidBST2(root->left).begin(),isValidBST2(root->left).end());
//		set.insert(isValidBST2(root->right).begin(),isValidBST2(root->right).end());
//
//		return set;
//	}*/
//};
