
// ���ߣ�labuladong
// �������ܣ������ڵݹ麯���У������鿴���ù��̼����ñ���
void printIndent(int n)
{
    for (int i = 0; i < n; i++) {
        printf("     ");
    }
}

// ʹ������LeetCode��124
#define max(a, b) ((a > b) ? (a) : (b))
int ans;

void printIndent(int n)
{
    for (int i = 0; i < n; i++) {
        printf("     ");
    }
}

// ��ʽ�ύʱ����ע���printfע�͵������ⳬ��ʱ������
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
    if (count == 0) return ans; // ���ظ��ڵ��sum

    // printIndent(count + 1);
    // printf("return max() + root \n");
    return max(left, right) + root->val;
}

int maxPathSum(struct TreeNode* root) {
    // ÿ�ε�����ǰ���ȹ̶���ʼ��ȫ�ֱ���ans
    ans = INT_MIN;

    int maxSum = maxPathSumDebug(root, -1);
    return maxSum;
}
