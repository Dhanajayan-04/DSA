// User function Template for C++

void squareWall(int s) {
    // Create one row of "* " repeated s times
    string row = "";
    for (int i = 0; i < s; i++) {
        row += "* ";
    }

    // Print the same row s times (single loop logic)
    int count = 0;
    while (count < s) {
        cout << row << endl;
        count++;
    }
}