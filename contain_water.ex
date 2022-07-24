# date: 2022-07-24
# author: cho hyun jae
# Runtime: 2950 ms, faster than 12.50% of Elixir online submissions for Container With Most Water.
# Memory Usage: 75.1 MB, less than 37.50% of Elixir online submissions for Container With Most Water.

defmodule Solution do
  @spec max_area(height :: [integer]) :: integer
  def max_area(height) do
    max_height = Enum.max(height)
    height_length = length(height)
    watering(height,Enum.reverse(height),max_height,height_length)
  end

  defp watering(heights,reversed,max_height,height_length) do
    Enum.reduce_while(1..10000, 0, 
      fn x, accu -> 
        l = find_vertical_line(heights,x)
        r =  height_length - 1 - find_vertical_line(reversed,x)
        accu = max(x * (r - l),accu)
        if x < max_height, do: {:cont, accu }, else: {:halt, accu}
      end)
  end
      
  defp find_vertical_line(heights, num), do: Enum.find_index(heights, fn x -> x >= num end)
end
