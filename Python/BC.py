def matched(s):
  bc = 0
  i = 0
  while bc >= 0 and i < len(s):
    if s[i] == '(':
      bc += 1
    elif s[i] == ')':
      bc -= 1
    i += 1
  if bc == 0:
    return True
  else:
    return False