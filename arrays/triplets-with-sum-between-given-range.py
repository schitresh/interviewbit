class Solution:
    def solve(self, A):
        A = list(map(float, A))
        a = []; b = []; c = []
        b1 = []; b2 = [];
        for x in A:
            if x > 0 and x < 2/3: a.append(x)
            elif x <= 1: b.append(x)
            elif x < 2: c.append(x)
            
        a = sorted(a); b = sorted(b); c = sorted(c)
        la = len(a)-1; lb = len(b)-1; lc = len(c)-1
        
        cases = []
        if la>=2: cases.append(a[la] + a[la-1] + a[la-2])
        if la>=1:
            if lb>=0:
                cases.append(a[la] + a[la-1] + b[0])
                cases.append(a[0] + a[1] + b[lb])
            if lc>=0: cases.append(a[0] + a[1] + c[0])
        if la>=0:
            if lb>=1: cases.append(a[0] + b[0] + b[1])
            if lb>=0 and lc>=0: cases.append(a[0] + b[0] + c[0])
        
        for x in cases:
            if 1<x and x<2: return 1
        
        return 0
        
