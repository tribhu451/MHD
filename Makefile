GSLLIBS      := $(shell gsl-config --libs)

CXX           = g++
CXXFLAGS      = -Wall -fPIC -O3 -march=native
LD            = g++
LDFLAGS       = -O3 -march=native

LIBS          = $(SYSLIBS) $(GSLLIBS)

vpath %.cpp src
objdir     = obj

SRC        = main.cpp cell.cpp grid.cpp init.cpp 
             
OBJS       = $(patsubst %.cpp,$(objdir)/%.o,$(SRC)) 
              
TARGET	   = mhd.exe
#--------------------------------------------------

$(TARGET):       $(OBJS)
		$(LD)  $(LDFLAGS) $^ -o $@ $(LIBS)
		@echo "$@ done"
clean:
		@rm -f $(OBJS) $(TARGET)

$(OBJS): | $(objdir)

$(objdir):
	@mkdir -p $(objdir)
	
obj/%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@




