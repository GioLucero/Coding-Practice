# Introduction to boolean type

def are_you_sad(is_rainy, has_umbrella):
    # same as writing = is_rainy == True and has_umbrella == False:
    return is_rainy and not has_umbrella

are_you_sad(True, False)