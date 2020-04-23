MACHINE
    M1
SEES CTX
OPERATIONS
    v1, v2 <-- M1_swap(p1, p2) =
    PRE p1: DATA & p2: DATA THEN
        v1 := p2 || v2 := p1
    END
    
END
