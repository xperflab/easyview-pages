

match_state store the match state of the string in string_idx
next_state_idx store the next state index of the match state, the default value is -1, when the stack move to the next state, the next_state_idx will be updated

we need match_state to store current state_t
we need match_state and next_state_idx to store current matched state and the next state of last try.

a(b|c)d
acd 
ace

acd
    a(-1)
0   a(0)b(-1)
01  a(0)b(-1)
01  a(1)c(-1)
01  a(1)c(0)
012



when backtracking we will execute the follow code:



// Language: cpp
struct state_t {
    string patten;
    int next_states_len;
    state_t* next_states;
};

struct stack_item_t {
    state_t* match_state;
    int next_state_idx;
};

class stack_t {
    stack_item_t pop();
    void push(stack_item_t);
    stack_item_t top();
    vector<stack_item_t> items;
};
bool backtrackingMatch(string text, state_t start_state) {
    stack_t stack;
    stack.push({start_state, -1});
    for (int i = 0; i < text.size;) {
        stack_item_t top = stack.top();
        if (top.next_state_idx == -1 && text[i] != top.match_state.patten) {
            stack.pop();
            i--;
        } else {
            top.next_state_idx ++;
            if (top.next_state_idx > top.match_state.next_states_len) {
                stack.pop();
                i--;
            } else {
                stack.push({top.match_state.next_states[top.next_state_idx], -1});
                i++;
            }
        }
        if (i < 0) {
            printf("no match\n");
            return;
        } else if (i == text.size) {
            printf("match\n");
            return;
        }
    }
}
