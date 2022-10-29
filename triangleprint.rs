
fn star_times(x:i32) -> String {
    let mut i:i32 = 0;
    let mut stars: String = "".to_owned();
    while i < x {
        stars.push_str(" * ");
        i += 1;
    }
    return stars;
}

fn space_times(x:i32) -> String {
    let mut i:i32 = 0;
    let mut spaces: String = "".to_owned();
    while i < x {
        spaces.push_str(" ");
        i += 1;
    }
    return spaces;
}

fn triangle(n:i32)  {
    for i in 1..n {
        println!("{}{}",space_times(n-i), star_times(i));
    }
}



fn main() {
    triangle(20);
}
