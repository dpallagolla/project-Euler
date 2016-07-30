def divide(numerator, denominator, detect_repetition=True, digit_limit=None):
    
    if not detect_repetition and digit_limit == None:
        return None

    decimal_found = False
    
    v = numerator // denominator
    numerator = 10 * (numerator - v * denominator)
    answer = str(v)
    
    if numerator == 0:
        return 0
    
    answer += '.'
    
    states = {}
    
    while numerator > 0 and (digit_limit == None or digit_limit > 0):
        
        if detect_repetition:
            prev_state = states.get(numerator, None)
            #print "prev_state:"+str(prev_state)
            if prev_state != None:
                start_repeat_index = prev_state
                non_repeating = answer[:start_repeat_index]
                repeating = answer[start_repeat_index:]
                #print non_repeating + '[' + repeating + ']'+"",
                return len(str(repeating))
                #return non_repeating + '[' + repeating + ']'
            states[numerator] = len(answer)
            #print states
        
        v = numerator // denominator
        answer += str(v)
        numerator -= v * denominator
        numerator *= 10
        if digit_limit != None:
            digit_limit -= 1
    
    if numerator > 0:
        return 0
    return 0


lengths = [0 for x in range(0,10001)]
for i in range (1,10001):
    lengths[i]=divide(1,i)

t = int(raw_input())

while(t!=0):
    t=t-1
    n = int(raw_input())
    print lengths.index(max(lengths[:n]))