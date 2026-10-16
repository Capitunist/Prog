count :: Int -> [Int] -> Int
count n list = go 0 list
  where
    go :: Int -> [Int] -> Int
    go result l =
        if null l    -- if the list is empty
        then result  -- then return our accmulated result
        else if head l == n
             then go (result + 1) (tail l)
             else go  result      (tail l)

jaj :: Int -> [Int] -> Int
jaj x y z