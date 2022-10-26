#include "equal-paths.h"

using namespace std;


// You may add any prototypes of helper functions here


bool checkPaths(Node *root, int lvl, int *leafLvl){
	if (root == nullptr){
		return true;
	}

	if (root->left == nullptr && root->right == nullptr){
		if (*leafLvl == 0){
			*leafLvl = lvl;
			return true;
		}
		return (lvl == *leafLvl);

	}
	return (checkPaths(root->left, lvl + 1, leafLvl) && checkPaths(root->right, lvl + 1, leafLvl));

}

bool equalPaths(Node *root)
{
	int lvl = 0;
	int leafLvl = 0;
	return checkPaths(root, lvl, &leafLvl);

	
    // Add your code below

}

