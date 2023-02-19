/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> equ;
        for (size_t i = 0; i < tokens.size(); i++)
        {
            /* code */
            // if ()
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                //cout<<equ.top()<<endl;
                int fisrtnum = stoi(equ.top());
                //cout<< fisrtnum <<endl;
                equ.pop();
                int secondnum = stoi(equ.top());
                equ.pop();
                
                switch (tokens[i][0])
                {
                case '+':
                    /* code */
                    equ.push(to_string(fisrtnum+secondnum));
                    break;
                
                case '-':
                    /* code */
                    equ.push(to_string(secondnum-fisrtnum));
                    break;
                case '*':
                    /* code */
                    equ.push(to_string(fisrtnum*secondnum));
                    break;
                case '/':
                    /* code */
                    equ.push(to_string(secondnum/fisrtnum));
                    break;

                }
                
            }
            else
            {
                equ.push(tokens[i]);
            }

            //cout<<equ.top()<<endl;

            
            
        }
        
        return stoi(equ.top());
        
    }
};
// @lc code=end

