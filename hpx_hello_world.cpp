#include <hpx/hpx_init.hpp>
#include <hpx/include/iostreams.hpp>

int hpx_main(int argc, char* argv[]) {
    hpx::cout << "Hello, HPX!" << hpx::endl;
    return hpx::finalize();
}

int main(int argc, char* argv[]) {
    return hpx::init(argc, argv);
}
