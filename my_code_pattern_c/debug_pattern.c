
// 作者：labuladong
// 函数功能：用于在递归函数中，清晰查看调用过程及调用变量
void printIndent(int n)
{
    for (int i = 0; i < n; i++) {
        printf("     ");
    }
}

// 使用例子LeetCode题124
#define max(a, b) ((a > b) ? (a) : (b))
int ans;

void printIndent(int n)
{
    for (int i = 0; i < n; i++) {
        printf("     ");
    }
}

// 正式提交时，请注意把printf注释掉，以免超出时间限制
int maxPathSumDebug(struct TreeNode* root, int count) {
    
    if (root == NULL) return 0;
    count++;
    // printIndent(count);
    // printf("enter %d \n", count);

    int lTmp = maxPathSumDebug(root->left, count);
    int left = max(lTmp, 0);

    int rTmp = maxPathSumDebug(root->right, count);
    int right = max(rTmp, 0);

    ans = max(ans, left + right + root->val);
    
    // printIndent(count + 1);
    // printf("ans = %d \n", ans);
    if (count == 0) return ans; // 返回根节点的sum

    // printIndent(count + 1);
    // printf("return max() + root \n");
    return max(left, right) + root->val;
}

int maxPathSum(struct TreeNode* root) {
    // 每次调用完前，先固定初始化全局变量ans
    ans = INT_MIN;

    int maxSum = maxPathSumDebug(root, -1);
    return maxSum;
}
