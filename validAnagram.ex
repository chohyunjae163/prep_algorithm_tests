# https://leetcode.com/problems/valid-anagram
# Runtime: 607 ms, faster than 7.14% of Elixir online submissions for Valid Anagram.
# Memory Usage: 72.2 MB, less than 57.14% of Elixir online submissions for Valid Anagram.

defmodule Solution do
  def is_anagram(s, t) do
    do_map(s) === do_map(t)
  end
  defp do_map(s), do: s |> String.graphemes |> Enum.reduce(%{}, fn x, accu -> Map.put(accu,x,Map.get(accu,x,0) + 1) end)
end
