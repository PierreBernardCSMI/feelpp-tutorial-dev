#include <feel/feelcore/environment.hpp>

int main( int argc, char* argv[] )
{
    using namespace Feel;

    Environment env( _argc=argc, _argv=argv,
                     _about=about( _name="env",
                                   _author="Feel++ Consortium",
                                   _email="feelpp-devel@feelpp.org") );
    Feel::cout << "proc " << Environment::rank()
              <<" of "<< Environment::numberOfProcessors()
              << std::endl;

}

