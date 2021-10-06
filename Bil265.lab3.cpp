class time24
{
    public:
        time24(int h = 0, int m = 0) {
            hour = h;
            minute = m;
        }

        void addTime(int m) {
            if (m >= 0) {
                minute += m;
                normalizeTime();
            }
            else {
                cout << "error at addTime: input 'm' must be zero"<< endl;
            }
        }

        time24 duration(const time24 &t) {
            time24 tR(abs(hour - t.hour), abs(minute - t.minute));
            return tR;
        }

        void readTime() {
            cout << "Enter time in format HH:MM"<< endl;
            fscanf(stdin, "%d:%d", &hour, &minute);
        }

        void writeTime() const {
            cout << hour << ":" << minute << endl;
        }

        int getHour() const {
            return hour;
        }

        int getMinute() const {
            return minute;
        }


    private:
        int hour, minute;

        void normalizeTime() {
            int extraHours = 0;
            if (minute >= 60) {
                extraHours = minute / 60;
                minute=minute % 60;

                hour= hour + extraHours;
            }

            if (hour >= 24) {
                hour %= 24;
            }
        }
};
int main() {
  time24 ta(11,30),tb,tc;
  tb.readtime();
  tb.addtime(50);
  tc=ta.duration(tb);
  tc.writeTime();
  cout<<(tc.getHour()*60+ tc.getMinute());

  return 0;
}
