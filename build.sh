which clang | grep "clang"

# shellcheck disable=SC2181
if [ $? == 0 ]; then
  echo "Clang compiler detected"
  clang --version
  cmake .
  make
  exit
fi

which g++ | grep "g++"
if [ $? == 0 ]; then
  echo "G++ compiler detected"
  g++  --version
  g++ -o heck ./main.cpp
  exit
fi
