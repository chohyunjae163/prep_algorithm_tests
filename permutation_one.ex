# Data: 2022-07-23
# author: Cho Hyun Jae
# Runtime: 418 ms, faster than 33.33% of Elixir online submissions for Permutations.
# Memory Usage: 49.6 MB, less than 100.00% of Elixir online submissions for Permutations.

defmodule Solution do
  @spec permute(nums :: [integer]) :: [[integer]]
  def permute(nums), do: do_permute(nums)
  defp do_permute([a]), do: [[a]] #shortcut
  defp do_permute([a,b]), do: [[a,b],[b,a]] #shortcut
  defp do_permute([a,b]), do: [[a,b,c],[a,c,b],[b,a,c],[b,c,a],[c,a,b],[c,b,a]] #shortcut
  defp do_permute(nums) do
    Enum.reduce(nums, [] ,fn x,accu ->
        sub = Enum.reject(nums, fn y -> y == x end)
        combinations = Enum.reduce(do_permute(sub),[], fn z,accu2 -> [[ x | z ] | accu2]  end)
        combinations ++ accu
    end)
  end
end
