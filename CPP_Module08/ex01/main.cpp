#include "Span.hpp"

void test_1()
{
  std::cout << "==========" << GREEN << " TEST 1 ( Normal test )" << RESET << "==========" << std::endl;
  
  Span sp(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << "shortest : " << sp.shortestSpan() << std::endl;
  std::cout << "longest : " << sp.longestSpan() << std::endl;
}

void test_2()
{
  std::cout << "==========" << GREEN << " TEST 2 ( Test with iterators )" << RESET << "==========" << std::endl;

  Span sp(5);

  std::vector<int> container_iterator_test;
  container_iterator_test.push_back(6);
  container_iterator_test.push_back(3);
  container_iterator_test.push_back(17);
  container_iterator_test.push_back(9);
  container_iterator_test.push_back(11);
  std::cout << GREEN << "[Print Other container]" << RESET << std::endl;
  std::vector<int>::iterator it = container_iterator_test.begin();
  std::vector<int>::iterator ite = container_iterator_test.end();

  while (it != ite)
  {
    std::cout << *it << std::endl;
    it++;
  }

  sp.addNumber(container_iterator_test.begin(), container_iterator_test.end());

  std::cout << GREEN << "[Print SPAN]" << RESET << std::endl;
  sp.print_tab();

  std::cout << "shortest : " << sp.shortestSpan() << std::endl;
  std::cout << "longest : " << sp.longestSpan() << std::endl;
}

void test_3()
{
  std::cout << "==========" << GREEN << " TEST 3 ( Test with tab is full )" << RESET << "==========" << std::endl;
  
  Span sp(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  sp.addNumber(123);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << GREEN << "[Print SPAN]" << RESET << std::endl;
  sp.print_tab();

  std::cout << "shortest : " << sp.shortestSpan() << std::endl;
  std::cout << "longest : " << sp.longestSpan() << std::endl;
}

void test_4()
{
  std::cout << "==========" << GREEN << " TEST 4 ( Test with invalid size = work (unsigned int) )" << RESET << "==========" << std::endl;
  
  Span sp(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << GREEN << "[Print SPAN]" << RESET << std::endl;
  sp.print_tab();

  std::cout << "shortest : " << sp.shortestSpan() << std::endl;
  std::cout << "longest : " << sp.longestSpan() << std::endl;
}

int main()
{
  try
  {
    test_1();
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  
  std::cout << std::endl;
  std::cout << std::endl;
  try
  {
    test_2();
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  std::cout << std::endl;
  std::cout << std::endl;
  try
  {
    test_3();
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }
  std::cout << std::endl;
  std::cout << std::endl;
  try
  {
    test_4();
  }
  catch(const std::exception& e)
  {
    std::cerr << RED << e.what() << RESET << '\n';
  }

  return 0;
}
