#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int sizeofrow = matrix.size();     // Matrix ke rows ki total count (matrix ke size ka pehla dimension).
    int sizeofcolm = matrix[0].size(); // Matrix ke columns ki total count (matrix ke second dimension ki size).
    int srow = 0;                      // Start row ko initialize kar rahe hain, initially 0 (top row).
    int erow = sizeofrow - 1;          // End row ko initialize kar rahe hain, last row ka index.
    int scolm = 0;                     // Start column ko initialize kar rahe hain, initially 0 (leftmost column).
    int ecolm = sizeofcolm - 1;        // End column ko initialize kar rahe hain, last column ka index.
    vector<int> ans;                   // Is vector me hum final answer (spiral order) store karenge.

    while (srow <= erow && scolm <= ecolm)
    {
        // top
        for (int j = scolm; j <= ecolm; j++)
        {
            ans.push_back(matrix[srow][j]);
        }
        // right
        for (int j = srow + 1; j <= erow; j++)
        {
            ans.push_back(matrix[j][ecolm]);
        }
        // bottom
        for (int j = ecolm - 1; j >= scolm; j--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(matrix[erow][j]);
        }
        // left
        for (int j = erow - 1; j >= srow + 1; j--)
        {
            if (scolm == ecolm)
            {
                break; // Agar left aur right column same ho, to loop ko break kar do.
            }
            ans.push_back(matrix[j][scolm]); // Har element ko result vector me add kar rahe hain.
        }

        srow++;
        erow--;
        scolm++;
        ecolm--;
    }
    return ans;
}
