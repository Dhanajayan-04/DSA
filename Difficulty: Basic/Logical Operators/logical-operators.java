class Solution {
    public String booleanOperations(boolean a, boolean b) {
        // Code here
        boolean andOp = a && b;
        boolean orOp = a || b;
        boolean notOp = !a;
        
        // Return result as a single string
        return andOp + " " + orOp + " " + notOp;
    }
}