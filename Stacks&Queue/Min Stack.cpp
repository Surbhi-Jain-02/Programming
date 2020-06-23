// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// push(x) – Push element x onto stack.
// pop() – Removes the element on top of the stack.
// top() – Get the top element.
// getMin() – Retrieve the minimum element in the stack.
// Note that all the operations have to be constant time operations.

stack<int> st;
stack<int> minSt;

MinStack::MinStack() {
    while(!st.empty()){
        st.pop();
    }
    while(!minSt.empty()){
        minSt.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    if(minSt.empty())
        minSt.push(x);
    else{
        if(x<minSt.top())
            minSt.push(x);
        else
            minSt.push(minSt.top());
    }
}

void MinStack::pop() {
    if(!st.empty()){
        st.pop();
        minSt.pop();
    }
}

int MinStack::top() {
    if(st.empty())
        return -1;
    else
        return st.top();
}

int MinStack::getMin() {
    if(minSt.empty())
        return -1;
    else
        return minSt.top();
}

