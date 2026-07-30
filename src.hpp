#pragma once
extern "C" int query(int x,int y,int z);
extern "C" int guess(int n,int Taskid){
    // Trivial stub: return 0 without querying
    (void)n; (void)Taskid;
    return 0;
}
