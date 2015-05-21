class Robot

  def name
    @the_name ||= name_generator
  end

  def reset
    @the_name = nil
  end

  private

  def name_generator
    s = ''
    for i in 1..2
      s << [*65..90].sample.chr
    end
    s << [*100..999].sample.to_s
  end

end
