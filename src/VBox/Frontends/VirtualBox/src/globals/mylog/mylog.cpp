#include <fstream>
#include "mylog.h"
#include <sys/time.h>

int writeMyLog(std::string log){
  struct timeval s;
  char timeString[100];
  gettimeofday(&s, NULL);
  sprintf(timeString, "%lld", (long long)(s.tv_sec));
  //printf("%d ms", (t.tv_sec - s.tv_sec) * 1000 + (t.tv_usec - s.tv_usec) / 1000);
  std::ofstream ofs( LOG_FILENAME , std::ios::out | std::ios::app );
  ofs << timeString << " " << log << std::endl;
  return 0;
}
