В main после получения итератора выделяется уже использумая память указателем buff. Из-за того что в дестркуторе итератора написано delete buff.

Old В методе insert в Ringedlist при пустом листе new выделяет тот же адрес памяти используемой в переменной buff
