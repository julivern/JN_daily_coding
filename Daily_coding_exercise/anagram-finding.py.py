# input from user
W = "ab"
S = "abxaba"

# convert the word into hash table in Python
h_W = dict()
for i in range(len(W)):
    h_W[W[i]] = i
hTarget = h_W.copy()
idx_found = list()

# iterate through all chars and find the target inside S
for i in range(len(S)):
    count = 0
    found = hTarget.get(S[i+count])
    while found!=None:
        hTarget.pop(S[i+count])
        count+=1
        if i+count < len(S):
            found = hTarget.get(S[i+count])
        else:
            break
    hTarget = h_W.copy()
    if count==len(W):
        idx_found.append(i)
    count=0
print(idx_found)