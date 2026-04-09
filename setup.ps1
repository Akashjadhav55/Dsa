$b = "d:\Github\Small\dsa-platform\Dsa\Logic Building"

$structure = @{
  "Conditional Thinking" = @{
    "1_Simple Condition" = 10
    "2_Nested If & MultiConditional" = 10
    "3_Math and Number Logic" = 10
    "4_Logical Operators & Compound Statements" = 10
    "5_Creative & Tricky Logical Scenarios" = 10
  }
  "LOOPING & PATTERNS" = @{
    "1_Basic Looping" = 10
    "2_Number-based Looping Logic" = 10
    "3_Mathematical & Logical Patterns" = 10
    "4_Pattern Printing" = 25
    "5_Logical Loop Combinations" = 10
  }
  "Recursion" = @{
    "1_Foundation of Recursion" = 10
    "2_Number-based Recursive Thinking" = 10
    "3_Pattern & Printing Problems" = 10
    "4_String-based Recursion" = 10
  }
  "Basic Arrays" = @{
    "1_Fundamentals of Arrays" = 10
    "2_Searching & Counting Logic" = 10
    "3_Transformation & Manipulation" = 10
    "4_Aggregate & Comparative Thinking" = 10
    "5_Logical & Applied Array Problems" = 10
  }
  "Strings" = @{
    "1_Basic String Handling" = 10
    "2_Counting & Character Analysis" = 10
    "3_Reversing & Palindromic Thinking" = 10
    "4_Character & Word Manipulation" = 10
    "5_Word-level Thinking" = 10
  }
  "Mixed Logical Challenges" = @{
    "1_Number-Based Logical Combinations" = 10
    "2_String + Logic Mix" = 10
    "3_Array + Looping Logic" = 10
    "4_Nested Logic & Pattern Flow" = 10
    "5_Applied Reasoning & Real-Life Logic" = 10
  }
}

foreach ($phase in $structure.Keys) {
  foreach ($level in $structure[$phase].Keys) {
    $count = $structure[$phase][$level]
    for ($i = 1; $i -le $count; $i++) {
      $dir = "$b\$phase\$level\$i"
      New-Item -ItemType Directory -Force -Path $dir | Out-Null
      # skip if files already exist
      if (-not (Test-Path "$dir\$i.js"))   { New-Item "$dir\$i.js"   -ItemType File | Out-Null }
      if (-not (Test-Path "$dir\$i.py"))   { New-Item "$dir\$i.py"   -ItemType File | Out-Null }
      if (-not (Test-Path "$dir\$i.java")) { New-Item "$dir\$i.java" -ItemType File | Out-Null }
    }
  }
}

Write-Host "ALL DONE"
