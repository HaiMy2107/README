int main() {
  
  std::vector<double> delivery_order;
 
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);

  
  // Calculate the total using a for loop:
  double total = 0.0;
  
  for (int i = 0; i < delivery_order.size(); i++) {
    total = total + delivery_order[i];
  }
  std::cout << "Total: $" << total << "\n";
  return 0;
  }
  
  // This is the list
   std::vector<int> even {2, 4, 3. 6, 1, 9};
