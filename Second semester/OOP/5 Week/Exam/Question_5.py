space_invaders = [ . . . ]  # Global_name
player_pos = ( 200 , 25 ) # Global_name
level = 1 max_level = 10  # Global_name

def play ( ) :  # Local_name
    . . . 
    while ( level < max_level +1 ) : # Built_in_name
         if len ( space_invaders ) == 0 : # Built_in_name
            level += 1 
            continue # Built_in_name
. . .
 
Local_name = play,
Global_name = space_invaders, player_pos, level , max_level,
Built_in_name =while , if, len, continue , def