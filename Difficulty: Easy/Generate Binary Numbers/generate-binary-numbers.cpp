
// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n) {
    // Your code here
    // string start=1;
    vector<string> ans;
    queue<string> q;
    q.push("1");
    
    while (n--){
        string top = q.front();
        q.pop();
        ans.push_back(top);
        q.push(top+"0");
        q.push(top+"1");
    }
    return ans;
    
    
}
