MACHINE
    M0
SEES CTX
CONCRETE_VARIABLES
    v0, v1, v2
INVARIANT
    v0 : DATA & v1 : DATA & v2 : DATA 
ASSERTIONS
    {v0} /\ DATA <: DATA
INITIALISATION
    v0 :: DATA || v1 :: DATA || v2 :: DATA
OPERATIONS
    M0_op1 =
    BEGIN
        v0 :: DATA || 
        v1 :: DATA || 
        v2 :: DATA
    END
    
END
