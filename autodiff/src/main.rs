mod tensor;

fn main() {
    let a = tensor::Node::new(1, 1);

    tensor::print_type(&a);
}