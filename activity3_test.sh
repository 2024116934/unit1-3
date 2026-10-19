#!/bin/bash
# Bash shell script to run tests.
# Note to students: You don't need to fully understand this!

echo "#####################################"
echo "       d[o_0]b ELEC2645 Bot          "
echo "#####################################"
echo "Running tests..."
echo

output=$(./activity3_value_reference.out)
status=$?
expected=(
  "Circle: r=2.50 -> Area=19.63, Circ=15.71, Diam=5.00"
  "New Circle: r=6.00 -> Area=113.10, Circ=37.70, Diam=12.00"
  "Rect: Width=3.00, Height=4.00 -> Area=12.00, Perim=14.00"
  "New Rect: Width=10.00, Height=2.50 -> Area=25.00, Perim=25.00"
)

if [ $status -ne 0 ]; then
  echo "Fail: Program crashed"
  exit 1
fi

mapfile -t lines <<< "$output"
failed=0
for i in "${!expected[@]}"; do
  if [ "${lines[$i]}" = "${expected[$i]}" ]; then
    echo "Pass [Line $((i+1))]: '${expected[$i]}'"
  else
    echo "Fail [Line $((i+1))]: Got '${lines[$i]}', Expected '${expected[$i]}'"
    failed=1
  fi
done
if [ "${#lines[@]}" -gt "${#expected[@]}" ]; then
  echo "Fail: Program printed extra lines"
  failed=1
fi

if [ $failed -eq 0 ]; then
  echo "#####################################"
  echo "     d[o_0]b All tests passed :D     "
  echo "#####################################"
  exit 0
else
  echo "#####################################"
  echo "     d[o_0]b Some tests failed :(    "
  echo "#####################################"
  exit 1
fi
