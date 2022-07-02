# https://leetcode.com/problems/two-sum/
#Runtime: 345 ms, faster than 82.29% of Elixir online submissions for Two Sum.
#Memory Usage: 54.4 MB, less than 12.50% of Elixir online submissions for Two Sum.

defmodule Solution do
  @spec two_sum(nums :: [integer], target :: integer) :: [integer]
  def two_sum(nums, _target) when length(nums) == 2, do: [0,1]        
                                 
  def two_sum(nums, target),  do: get_index(nums,target,%{},0)
                   
  defp get_index([head | _tail], _target, map,val) when is_map_key(map,head), do: [Map.get(map,head), val]
                                                                                                      
  defp get_index([head | tail], target, map,val), do: get_index(tail,target,Map.put(map, target - head, val), val + 1)
end
