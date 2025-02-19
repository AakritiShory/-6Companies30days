class Solution {
    public boolean isValid(String s) {
        Stack<Character> st=new Stack<>();
        for(Character ch:s.toCharArray()){
            if(st.isEmpty()){
                st.push(ch);
            }else if(
                (st.peek()=='('&&ch==')')||
                (st.peek()=='{'&&ch=='}')||
                (st.peek()=='['&&ch==']')){
                   st.pop();
            }else{
                st.push(ch);
            }
        }
        if(st.isEmpty()){
            return true;
        }else{
            return false;
        }
        
    }
}