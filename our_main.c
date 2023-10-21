int main(int argc, char *argv[], char **env)
  {
  char *buffz = NULL, *apt = "$";
  size_t buffz_size = 0;
  ssize_t feed;
  pid_t mpid;
  int status;
  bool from_pipe = false;
  struct stat statbuf;
  
  if (!isatty(STDIN_FILENO))
  {
  from_pipe = true;
  }
  
  while (1)
  {
  write(STDOUT_FILENO, apt, 1);
  
  feed = getline(&buffz, &buffz_size, stdin);
  if (feed == -1)
  {
  perror("invalid (getline)");
 free(buffz);
  exit(EXIT_FAILURE);
  }
}
  
  if (buffz[feed - 1] == '\n')
  {
  buffz[feed - 1] = '\0';
  }
  
  mpid = fork();
  if (mpid == -1)
  {
  perror("(error (fork)*)");
  exit(EXIT_FAILURE);
  }
  
  if (mpid == 0)
  {
  _execute(buffz, env);
  }
  
  if (waitpid(mpid, &status, 0) == -1)
  {
  perror("[error(wait)*]");
  exit(EXIT_FAILURE);
  }
  }
  
  free(buffz);
 return (0);
