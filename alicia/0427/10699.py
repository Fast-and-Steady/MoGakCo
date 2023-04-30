import pytz
from datetime import datetime
tz = pytz.timezone('Asia/Seoul')
now = datetime.now(tz)
print(now.strftime('%Y-%m-%d'))

'''just print('yyyy-mm-dd') works. above: runtime error due to using external library.  '''