class Squares

  attr_reader :n

  def initialize(n)
    @n = n
  end

  def square_of_sums
    sum = 0
    (1..n).each do |x|
      sum += x
    end
    sum ** 2
  end

  def sum_of_squares
    sum = 0
    (1..n).each do |x|
      sum += x**2
    end
    sum
  end

  def difference
    square_of_sums - sum_of_squares
  end

end
