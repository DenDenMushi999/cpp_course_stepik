# 1 "max_macro.cpp"
# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\iostream" 1 3
 
 



# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\iostream.h" 1 3
 

























#pragma interface



# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\streambuf.h" 1 3
 


























#pragma interface


   



extern "C" {
# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 1 3
 




























# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\_G_config.h" 1 3
  









typedef          int   _G_int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int  _G_uint8_t __attribute__((__mode__(__QI__)));
typedef          int  _G_int16_t __attribute__((__mode__(__HI__)));
typedef unsigned int _G_uint16_t __attribute__((__mode__(__HI__)));
typedef          int  _G_int32_t __attribute__((__mode__(__SI__)));
typedef unsigned int _G_uint32_t __attribute__((__mode__(__SI__)));
typedef          int  _G_int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int _G_uint64_t __attribute__((__mode__(__DI__)));

__extension__ typedef long long _G_llong;
__extension__ typedef unsigned long long _G_ullong;








typedef unsigned long _G_clock_t;
typedef short _G_dev_t;
typedef long _G_fpos_t;
typedef unsigned short _G_gid_t;
typedef unsigned long _G_ino_t;
typedef int _G_mode_t;
typedef unsigned short _G_nlink_t;
typedef long _G_off_t;
typedef int _G_pid_t;



typedef int _G_ptrdiff_t;
typedef unsigned long _G_sigset_t;



typedef unsigned int _G_size_t;
typedef long _G_time_t;
typedef unsigned short _G_uid_t;
typedef short unsigned int _G_wchar_t;















typedef long _G_ssize_t;
typedef unsigned int _G_wint_t;
typedef void * _G_va_list;

















# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 1 3






 


# 19 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3



 


 





 


# 61 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3


 





 


















 





 

 

# 131 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3


 

 

# 190 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3



 




 

# 271 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3


# 283 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3


 

 

# 317 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\include\\stddef.h" 3




 





















# 86 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\_G_config.h" 2 3


# 30 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 2 3

















# 55 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 3




# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/cdefs.h" 1 3












# 59 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 2 3










 















# 96 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 3











 
























 



















struct _IO_jump_t;  struct _IO_FILE;

 
# 166 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 3









    typedef void _IO_lock_t;





 

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
   

   
  int _pos;
# 199 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\libio.h" 3

};

struct _IO_FILE {
  int _flags;		 


   
   
  char* _IO_read_ptr;	 
  char* _IO_read_end;	 
  char* _IO_read_base;	 
  char* _IO_write_base;	 
  char* _IO_write_ptr;	 
  char* _IO_write_end;	 
  char* _IO_buf_base;	 
  char* _IO_buf_end;	 
   
  char *_IO_save_base;  
  char *_IO_backup_base;   
  char *_IO_save_end;  

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _blksize;



  _G_off_t  _offset;



   
  unsigned short _cur_column;
  char _unused;
  char _shortbuf[1];

   








};











struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_stdin_, _IO_stdout_, _IO_stderr_;





 
typedef struct
{
  _G_ssize_t  (*read)  (struct _IO_FILE *, void *, _G_ssize_t )  ;
  _G_ssize_t  (*write)  (struct _IO_FILE *, const void *, _G_ssize_t )  ;
  _G_fpos_t  (*seek)  (struct _IO_FILE *, _G_off_t , int)  ;
  int (*close)  (struct _IO_FILE *)  ;
} _IO_cookie_io_functions_t;

 
struct _IO_cookie_file
{
  struct _IO_FILE file;
  const void *vtable;
  void *cookie;
  _IO_cookie_io_functions_t io_functions;
};



extern "C" {


extern int __underflow  (_IO_FILE *)  ;
extern int __uflow  (_IO_FILE *)  ;
extern int __overflow  (_IO_FILE *, int)  ;

















extern int _IO_getc  (_IO_FILE *__fp)  ;
extern int _IO_putc  (int __c, _IO_FILE *__fp)  ;
extern int _IO_feof  (_IO_FILE *__fp)  ;
extern int _IO_ferror  (_IO_FILE *__fp)  ;

extern int _IO_peekc_locked  (_IO_FILE *__fp)  ;

 



extern void _IO_flockfile  (_IO_FILE *)  ;
extern void _IO_funlockfile  (_IO_FILE *)  ;
extern int _IO_ftrylockfile  (_IO_FILE *)  ;













extern int _IO_vfscanf  (_IO_FILE *, const char *, _G_va_list , int *)  ;
extern int _IO_vfprintf  (_IO_FILE *, const char *, _G_va_list )  ;
extern _G_ssize_t  _IO_padn  (_IO_FILE *, int, _G_ssize_t )  ;
extern _G_size_t  _IO_sgetn  (_IO_FILE *, void *, _G_size_t )  ;





extern _G_fpos_t  _IO_seekoff  (_IO_FILE *, _G_off_t , int, int)  ;
extern _G_fpos_t  _IO_seekpos  (_IO_FILE *, _G_fpos_t , int)  ;


extern void _IO_free_backup_area  (_IO_FILE *)  ;


}



# 36 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\streambuf.h" 2 3

}
 


























extern "C++" {
class istream;  
class ostream; class streambuf;

 







typedef _G_off_t  streamoff;
typedef _G_fpos_t  streampos;

typedef _G_ssize_t  streamsize;

typedef unsigned long __fmtflags;
typedef unsigned char __iostate;

struct _ios_fields
{  
    streambuf *_strbuf;
    ostream* _tie;
    int _width;
    __fmtflags _flags;
    short  _fill;
    __iostate _state;
    __iostate _exceptions;
    int _precision;

    void *_arrays;  
};















# 124 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\streambuf.h" 3


class ios : public _ios_fields {
  ios& operator=(ios&);   
  ios (const ios&);  
  public:
    typedef __fmtflags fmtflags;
    typedef int iostate;
    typedef int openmode;
    typedef int streamsize;
    enum io_state {
	goodbit = 0 ,
	eofbit = 1 ,
	failbit = 2 ,
	badbit = 4  };
    enum open_mode {
	in = 1 ,
	out = 2 ,
	ate = 4 ,
	app = 8 ,
	trunc = 16 ,
	nocreate = 32 ,
	noreplace = 64 ,
	bin = 128 ,  
	binary = 128  };
    enum seek_dir { beg, cur, end};
    typedef enum seek_dir seekdir;
     
    enum { skipws= 01 ,
	   left= 02 , right= 04 , internal= 010 ,
	   dec= 020 , oct= 040 , hex= 0100 ,
	   showbase= 0200 , showpoint= 0400 ,
	   uppercase= 01000 , showpos= 02000 ,
	   scientific= 04000 , fixed= 010000 ,
	   unitbuf= 020000 , stdio= 040000 



	   };
    enum {  
	basefield=dec+oct+hex,
	floatfield = scientific+fixed,
	adjustfield = left+right+internal
    };

# 177 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\streambuf.h" 3


    ostream* tie() const { return _tie; }
    ostream* tie(ostream* val) { ostream* save=_tie; _tie=val; return save; }

     
    short  fill() const { return _fill; }
    short  fill(short  newf)
	{short  oldf = _fill; _fill = newf; return oldf;}
    fmtflags flags() const { return _flags; }
    fmtflags flags(fmtflags new_val) {
	fmtflags old_val = _flags; _flags = new_val; return old_val; }
    int precision() const { return _precision; }
    int precision(int newp) {
	unsigned short oldp = _precision; _precision = (unsigned short)newp;
	return oldp; }
    fmtflags setf(fmtflags val) {
	fmtflags oldbits = _flags;
	_flags |= val; return oldbits; }
    fmtflags setf(fmtflags val, fmtflags mask) {
	fmtflags oldbits = _flags;
	_flags = (_flags & ~mask) | (val & mask); return oldbits; }
    fmtflags unsetf(fmtflags mask) {
	fmtflags oldbits = _flags;
	_flags &= ~mask; return oldbits; }
    int width() const { return _width; }
    int width(int val) { int save = _width; _width = val; return save; }




    void _throw_failure() const { }

    void clear(iostate state = 0) {
	_state = _strbuf ? state : state|badbit;
	if (_state & _exceptions) _throw_failure(); }
    void set(iostate flag) { _state |= flag;
	if (_state & _exceptions) _throw_failure(); }
    void setstate(iostate flag) { _state |= flag;  
	if (_state & _exceptions) _throw_failure(); }
    int good() const { return _state == 0; }
    int eof() const { return _state & ios::eofbit; }
    int fail() const { return _state & (ios::badbit|ios::failbit); }
    int bad() const { return _state & ios::badbit; }
    iostate rdstate() const { return _state; }
    operator void*() const { return fail() ? (void*)0 : (void*)(-1); }
    int operator!() const { return fail(); }
    iostate exceptions() const { return _exceptions; }
    void exceptions(iostate enable) {
	_exceptions = enable;
	if (_state & _exceptions) _throw_failure(); }

    streambuf* rdbuf() const { return _strbuf; }
    streambuf* rdbuf(streambuf *_s) {
      streambuf *_old = _strbuf; _strbuf = _s; clear (); return _old; }

    static int sync_with_stdio(int on);
    static void sync_with_stdio() { sync_with_stdio(1); }
    static fmtflags bitalloc();
    static int xalloc();
    void*& pword(int);
    void* pword(int) const;
    long& iword(int);
    long iword(int) const;









     
    class Init {
    public:
      Init () { }
    };

  protected:
    inline ios(streambuf* sb = 0, ostream* tie_to = 0);
    inline virtual ~ios();
    inline void init(streambuf* sb, ostream* tie = 0);
};




typedef ios::seek_dir _seek_dir;


 
 
 
 
 

 
 
class streammarker : private _IO_marker {
    friend class streambuf;
    void set_offset(int offset) { _pos = offset; }
  public:
    streammarker(streambuf *sb);
    ~streammarker();
    int saving() { return  1; }
    int delta(streammarker&);
    int delta();
};

struct streambuf : public _IO_FILE {  
    friend class ios;
    friend class istream;
    friend class ostream;
    friend class streammarker;
    const void *&_vtable() { return *(const void**)((_IO_FILE*)this + 1); }
  protected:
    static streambuf* _list_all;  
    _IO_FILE*& xchain() { return _chain; }
    void _un_link();
    void _link_in();
    char* gptr() const
      { return _flags  & 0x100  ? _IO_save_base : _IO_read_ptr; }
    char* pptr() const { return _IO_write_ptr; }
    char* egptr() const
      { return _flags  & 0x100  ? _IO_save_end : _IO_read_end; }
    char* epptr() const { return _IO_write_end; }
    char* pbase() const { return _IO_write_base; }
    char* eback() const
      { return _flags  & 0x100  ? _IO_save_base : _IO_read_base;}
    char* base() const { return _IO_buf_base; }
    char* ebuf() const { return _IO_buf_end; }
    int blen() const { return _IO_buf_end - _IO_buf_base; }
    void xput_char(char c) { *_IO_write_ptr++ = c; }
    int xflags() { return _flags ; }
    int xflags(int f) {int fl = _flags ; _flags  = f; return fl;}
    void xsetflags(int f) { _flags  |= f; }
    void xsetflags(int f, int mask)
      { _flags  = (_flags  & ~mask) | (f & mask); }
    void gbump(int n)
      { _flags  & 0x100  ? (_IO_save_base+=n):(_IO_read_ptr+=n);}
    void pbump(int n) { _IO_write_ptr += n; }
    void setb(char* b, char* eb, int a=0);
    void setp(char* p, char* ep)
      { _IO_write_base=_IO_write_ptr=p; _IO_write_end=ep; }
    void setg(char* eb, char* g, char *eg) {
      if (_flags  & 0x100 ) _IO_free_backup_area(this); 
      _IO_read_base = eb; _IO_read_ptr = g; _IO_read_end = eg; }
    char *shortbuf() { return _shortbuf; }

    int in_backup() { return _flags & 0x100 ; }
     
    char *Gbase() { return in_backup() ? _IO_save_base : _IO_read_base; }
     
    char *eGptr() { return in_backup() ? _IO_save_end : _IO_read_end; }
     
    char *Bbase() { return in_backup() ? _IO_read_base : _IO_save_base; }
    char *Bptr() { return _IO_backup_base; }
     
    char *eBptr() { return in_backup() ? _IO_read_end : _IO_save_end; }
    char *Nbase() { return _IO_save_base; }
    char *eNptr() { return _IO_save_end; }
    int have_backup() { return _IO_save_base != __null ; }
    int have_markers() { return _markers != __null ; }
    void free_backup_area();
    void unsave_markers();  
    int put_mode() { return _flags & 0x800 ; }
    int switch_to_get_mode();
    
    streambuf(int flags=0);
  public:
    static int flush_all();
    static void flush_all_linebuffered();  
    virtual ~streambuf();
    virtual int overflow(int c = (-1) );  
    virtual int underflow();  
    virtual int uflow();  
    virtual int pbackfail(int c);
 
    virtual streamsize xsputn(const char* s, streamsize n);
    virtual streamsize xsgetn(char* s, streamsize n);
    virtual streampos seekoff(streamoff, _seek_dir, int mode=ios::in|ios::out);
    virtual streampos seekpos(streampos pos, int mode = ios::in|ios::out);

    streampos pubseekoff(streamoff o, _seek_dir d, int mode=ios::in|ios::out)
      { return _IO_seekoff (this, o, d, mode); }
    streampos pubseekpos(streampos pos, int mode = ios::in|ios::out)
      { return _IO_seekpos (this, pos, mode); }
    streampos sseekoff(streamoff, _seek_dir, int mode=ios::in|ios::out);
    streampos sseekpos(streampos pos, int mode = ios::in|ios::out);
    virtual streambuf* setbuf(char* p, int len);
    virtual int sync();
    virtual int doallocate();

    int seekmark(streammarker& mark, int delta = 0);
    int sputbackc(char c);
    int sungetc();
    int unbuffered() { return _flags & 2  ? 1 : 0; }
    int linebuffered() { return _flags & 0x200  ? 1 : 0; }
    void unbuffered(int i)
	{ if (i) _flags |= 2 ; else _flags &= ~2 ; }
    void linebuffered(int i)
	{ if (i) _flags |= 0x200 ; else _flags &= ~0x200 ; }
    int allocate() {  
	if (base() || unbuffered()) return 0;
	else return doallocate(); }
     
    void allocbuf() { if (base() == __null ) doallocbuf(); }
    void doallocbuf();
    int in_avail() { return _IO_read_end - _IO_read_ptr; }
    int out_waiting() { return _IO_write_ptr - _IO_write_base; }
    streamsize sputn(const char* s, streamsize n) { return xsputn(s, n); }
    streamsize padn(char pad, streamsize n) { return _IO_padn(this, pad, n); }
    streamsize sgetn(char* s, streamsize n) { return _IO_sgetn(this, s, n); }
    int ignore(int);
    int get_column();
    int set_column(int);
    long sgetline(char* buf, _G_size_t  n, char delim, int putback_delim);
    int sputc(int c) { return _IO_putc(c, this); }
    int sbumpc() { return _IO_getc(this); }
    int sgetc() { return ((  this  )->_IO_read_ptr >= (  this  )->_IO_read_end && __underflow (  this  ) == (-1)  ? (-1)  : *(unsigned char *) (  this  )->_IO_read_ptr)  ; }
    int snextc() {
	if (_IO_read_ptr >= _IO_read_end && __underflow(this) == (-1) )
	  return (-1) ;
	else return _IO_read_ptr++, sgetc(); }
    void stossc() { if (_IO_read_ptr < _IO_read_end) _IO_read_ptr++; }
    int vscan(char const *fmt0, _G_va_list  ap, ios* stream = __null );
    int scan(char const *fmt0 ...);
    int vform(char const *fmt0, _G_va_list  ap);
    int form(char const *fmt0 ...);




    virtual streamsize sys_read(char* buf, streamsize size);
    virtual streamsize sys_write(const char*, streamsize);
    virtual streampos sys_seek(streamoff, _seek_dir);
    virtual int sys_close();
    virtual int sys_stat(void*);  




};

 
 

class filebuf : public streambuf {
  protected:
    void init();
  public:
    static const int openprot;  
    filebuf();
    filebuf(int fd);
    filebuf(int fd, char* p, int len);



    ~filebuf();
    filebuf* attach(int fd);
    filebuf* open(const char *filename, const char *mode);
    filebuf* open(const char *filename, ios::openmode mode, int prot = 0664);
    virtual int underflow();
    virtual int overflow(int c = (-1) );
    int is_open() const { return _fileno >= 0; }
    int fd() const { return is_open() ? _fileno : (-1) ; }
    filebuf* close();
    virtual int doallocate();
    virtual streampos seekoff(streamoff, _seek_dir, int mode=ios::in|ios::out);
    virtual streambuf* setbuf(char* p, int len);
    streamsize xsputn(const char* s, streamsize n);
    streamsize xsgetn(char* s, streamsize n);
    virtual int sync();
  protected:  
 
    int is_reading() { return eback() != egptr(); }
    char* cur_ptr() { return is_reading() ?  gptr() : pptr(); }
     
    char* file_ptr() { return eGptr(); }
     
    virtual streamsize sys_read(char* buf, streamsize size);
    virtual streampos sys_seek(streamoff, _seek_dir);
    virtual streamsize sys_write(const char*, streamsize);
    virtual int sys_stat(void*);  
    virtual int sys_close();




};

inline void ios::init(streambuf* sb, ostream* tie_to) {
		_state = sb ? ios::goodbit : ios::badbit; _exceptions=0;
		_strbuf=sb; _tie = tie_to; _width=0; _fill=' ';

		_flags=ios::skipws|ios::dec;



		_precision=6; _arrays = 0; }

inline ios::ios(streambuf* sb, ostream* tie_to) { init(sb, tie_to); }

inline ios::~ios() {



    if (_arrays) delete [] _arrays;
}
}  

# 31 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\iostream.h" 2 3


extern "C++" {
class istream; class ostream;
typedef ios& (*__manip)(ios&);
typedef istream& (*__imanip)(istream&);
typedef ostream& (*__omanip)(ostream&);

extern istream& ws(istream& ins);
extern ostream& flush(ostream& outs);
extern ostream& endl(ostream& outs);
extern ostream& ends(ostream& outs);

class ostream : virtual public ios
{
     
    void do_osfx();
  public:
    ostream() { }
    ostream(streambuf* sb, ostream* tied= __null );
    int opfx() {
	if (!good()) return 0;
	else { if (_tie) _tie->flush();  ; return 1;} }
    void osfx() {  ;
		  if (flags() & (ios::unitbuf|ios::stdio))
		      do_osfx(); }
    ostream& flush();
    ostream& put(char c) { _strbuf->sputc(c); return *this; }





    ostream& write(const char *s, streamsize n);
    ostream& write(const unsigned char *s, streamsize n)
      { return write((const char*)s, n);}
    ostream& write(const signed char *s, streamsize n)
      { return write((const char*)s, n);}
    ostream& write(const void *s, streamsize n)
      { return write((const char*)s, n);}
    ostream& seekp(streampos);
    ostream& seekp(streamoff, _seek_dir);
    streampos tellp();
    ostream& form(const char *format ...);
    ostream& vform(const char *format, _G_va_list  args);

    ostream& operator<<(char c);
    ostream& operator<<(unsigned char c) { return (*this) << (char)c; }
    ostream& operator<<(signed char c) { return (*this) << (char)c; }
    ostream& operator<<(const char *s);
    ostream& operator<<(const unsigned char *s)
	{ return (*this) << (const char*)s; }
    ostream& operator<<(const signed char *s)
	{ return (*this) << (const char*)s; }
    ostream& operator<<(const void *p);
    ostream& operator<<(int n);
    ostream& operator<<(unsigned int n);
    ostream& operator<<(long n);
    ostream& operator<<(unsigned long n);

    __extension__ ostream& operator<<(long long n);
    __extension__ ostream& operator<<(unsigned long long n);

    ostream& operator<<(short n) {return operator<<((int)n);}
    ostream& operator<<(unsigned short n) {return operator<<((unsigned int)n);}

    ostream& operator<<(bool b) { return operator<<((int)b); }

    ostream& operator<<(double n);
    ostream& operator<<(float n) { return operator<<((double)n); }



    ostream& operator<<(long double n) { return operator<<((double)n); }

    ostream& operator<<(__omanip func) { return (*func)(*this); }
    ostream& operator<<(__manip func) {(*func)(*this); return *this;}
    ostream& operator<<(streambuf*);



};

class istream : virtual public ios
{
     
protected:
    _G_size_t  _gcount;

    int _skip_ws();
  public:
    istream(): _gcount (0) { }
    istream(streambuf* sb, ostream*tied= __null );
    istream& get(char* ptr, int len, char delim = '\n');
    istream& get(unsigned char* ptr, int len, char delim = '\n')
	{ return get((char*)ptr, len, delim); }
    istream& get(char& c);
    istream& get(unsigned char& c) { return get((char&)c); }
    istream& getline(char* ptr, int len, char delim = '\n');
    istream& getline(unsigned char* ptr, int len, char delim = '\n')
	{ return getline((char*)ptr, len, delim); }
    istream& get(signed char& c)  { return get((char&)c); }
    istream& get(signed char* ptr, int len, char delim = '\n')
	{ return get((char*)ptr, len, delim); }
    istream& getline(signed char* ptr, int len, char delim = '\n')
	{ return getline((char*)ptr, len, delim); }
    istream& read(char *ptr, streamsize n);
    istream& read(unsigned char *ptr, streamsize n)
      { return read((char*)ptr, n); }
    istream& read(signed char *ptr, streamsize n)
      { return read((char*)ptr, n); }
    istream& read(void *ptr, streamsize n)
      { return read((char*)ptr, n); }
    istream& get(streambuf& sb, char delim = '\n');
    istream& gets(char **s, char delim = '\n');
    int ipfx(int need = 0) {
	if (!good()) { set(ios::failbit); return 0; }
	else {
	   ;
	  if (_tie && (need == 0 || rdbuf()->in_avail() < need)) _tie->flush();
	  if (!need && (flags() & ios::skipws)) return _skip_ws();
	  else return 1;
	}
    }
    int ipfx0() {  
	if (!good()) { set(ios::failbit); return 0; }
	else {
	   ;
	  if (_tie) _tie->flush();
	  if (flags() & ios::skipws) return _skip_ws();
	  else return 1;
	}
    }
    int ipfx1() {  
	if (!good()) { set(ios::failbit); return 0; }
	else {
	   ;
	  if (_tie && rdbuf()->in_avail() == 0) _tie->flush();
	  return 1;
	}
    }
    void isfx() {  ; }
    int get() { if (!ipfx1()) return (-1) ;
		else { int ch = _strbuf->sbumpc();
		       if (ch == (-1) ) set(ios::eofbit);
		       return ch;
		     } }
    int peek();
    _G_size_t  gcount() { return _gcount; }
    istream& ignore(int n=1, int delim = (-1) );
    int sync ();
    istream& seekg(streampos);
    istream& seekg(streamoff, _seek_dir);
    streampos tellg();
    istream& putback(char ch) {
	if (good() && _strbuf->sputbackc(ch) == (-1) ) clear(ios::badbit);
	return *this;}
    istream& unget() {
	if (good() && _strbuf->sungetc() == (-1) ) clear(ios::badbit);
	return *this;}
    istream& scan(const char *format ...);
    istream& vscan(const char *format, _G_va_list  args);






    istream& operator>>(char*);
    istream& operator>>(unsigned char* p) { return operator>>((char*)p); }
    istream& operator>>(signed char*p) { return operator>>((char*)p); }
    istream& operator>>(char& c);
    istream& operator>>(unsigned char& c) {return operator>>((char&)c);}
    istream& operator>>(signed char& c) {return operator>>((char&)c);}
    istream& operator>>(int&);
    istream& operator>>(long&);

    __extension__ istream& operator>>(long long&);
    __extension__ istream& operator>>(unsigned long long&);

    istream& operator>>(short&);
    istream& operator>>(unsigned int&);
    istream& operator>>(unsigned long&);
    istream& operator>>(unsigned short&);

    istream& operator>>(bool&);

    istream& operator>>(float&);
    istream& operator>>(double&);
    istream& operator>>(long double&);
    istream& operator>>( __manip func) {(*func)(*this); return *this;}
    istream& operator>>(__imanip func) { return (*func)(*this); }
    istream& operator>>(streambuf*);
};

class iostream : public istream, public ostream
{
  public:
    iostream() { }
    iostream(streambuf* sb, ostream*tied= __null );
};

class _IO_istream_withassign : public istream {
public:
  _IO_istream_withassign& operator=(istream&);
  _IO_istream_withassign& operator=(_IO_istream_withassign& rhs)
    { return operator= (static_cast<istream&> (rhs)); }
};

class _IO_ostream_withassign : public ostream {
public:
  _IO_ostream_withassign& operator=(ostream&);
  _IO_ostream_withassign& operator=(_IO_ostream_withassign& rhs)
    { return operator= (static_cast<ostream&> (rhs)); }
};

extern _IO_istream_withassign cin;
 
extern _IO_ostream_withassign cout, cerr;

extern _IO_ostream_withassign clog



;

extern istream& lock(istream& ins);
extern istream& unlock(istream& ins);
extern ostream& lock(ostream& outs);
extern ostream& unlock(ostream& outs);

struct Iostream_init { } ;   

inline ios& dec(ios& i)
{ i.setf(ios::dec, ios::dec|ios::hex|ios::oct); return i; }
inline ios& hex(ios& i)
{ i.setf(ios::hex, ios::dec|ios::hex|ios::oct); return i; }
inline ios& oct(ios& i)
{ i.setf(ios::oct, ios::dec|ios::hex|ios::oct); return i; }
}  


# 6 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\iostream" 2 3


# 1 "max_macro.cpp" 2

# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\cmath" 1 3
 
 




# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\math.h" 1 3
 



extern "C" {



# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/reent.h" 1 3
 

 





extern "C" {



# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\_ansi.h" 1 3
 

 











# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/config.h" 1 3



 
 
# 14 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/config.h" 3


# 25 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/config.h" 3


 








# 44 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/config.h" 3








 

































 
















typedef int __int32_t;
typedef unsigned int __uint32_t;







# 15 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\_ansi.h" 2 3


 
 

























# 61 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\_ansi.h" 3


 








# 13 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\sys/reent.h" 2 3


struct _glue 
{
  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint 
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  unsigned long _x[1];
};

 





struct _atexit {
	struct	_atexit *_next;			 
	int	_ind;				 
	void	(*_fns[32 ])(void);	 
};

 






struct __sbuf {
	unsigned char *_base;
	int	_size;
};

 




typedef long _fpos_t;		 
				 

 
























struct __sFILE {
  unsigned char *_p;	 
  int	_r;		 
  int	_w;		 
  short	_flags;		 
  short	_file;		 
  struct __sbuf _bf;	 
  int	_lbfsize;	 

   
  void * 	_cookie;	 

  int	 (*_read)   (void *  _cookie, char *_buf, int _n)  ;
  int	 (*_write)   (void *  _cookie, const char *_buf, int _n)  ;
  _fpos_t  (*_seek)   (void *  _cookie, _fpos_t _offset, int _whence)  ;
  int	 (*_close)   (void *  _cookie)  ;

   
  struct __sbuf _ub;	 
  unsigned char *_up;	 
  int	_ur;		 

   
  unsigned char _ubuf[3];	 
  unsigned char _nbuf[1];	 

   
  struct __sbuf _lb;	 

   
  int	_blksize;	 
  int	_offset;	 

  struct _reent *_data;
};

 







struct _reent
{
   
  int _errno;

   


  struct __sFILE *_stdin, *_stdout, *_stderr;

  int  _inc;			 
  char _emergency[25];
 
  int _current_category;	 
  const  char *_current_locale;

  int __sdidinit;		 

  void  (*__cleanup)   (struct _reent *)  ;

   
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

   
  int _cvtlen;			 
  char *_cvtbuf;

   



  unsigned char * _nextf[30 ];
  unsigned int _nmalloc[30 ];

   
  struct _atexit *_atexit;	 
  struct _atexit _atexit0;	 

   
  void (**(_sig_func))(void);

   


  struct _glue __sglue;			 
  struct __sFILE __sf[3];		 
};




 








extern struct _reent *_impure_ptr  ;

void _reclaim_reent   (struct _reent *)    ;

 






}


# 9 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\math.h" 2 3

# 1 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\machine/ieeefp.h" 1 3






































# 48 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\machine/ieeefp.h" 3


























 







































# 122 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\machine/ieeefp.h" 3



















# 10 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\i586-cygwin32\\include\\math.h" 2 3





 


union __dmath
{
  __uint32_t i[2];
  double d;
};

extern const union __dmath __infinity;





 


extern double atan   (double)    ;
extern double cos   (double)    ;
extern double sin   (double)    ;
extern double tan   (double)    ;
extern double tanh   (double)    ;
extern double frexp   (double, int *)    ;
extern double modf   (double, double *)    ;
extern double ceil   (double)    ;
extern double fabs   (double)    ;
extern double floor   (double)    ;


 



extern double acos   (double)    ;
extern double asin   (double)    ;
extern double atan2   (double, double)    ;
extern double cosh   (double)    ;
extern double sinh   (double)    ;
extern double exp   (double)    ;
extern double ldexp   (double, int)    ;
extern double log   (double)    ;
extern double log10   (double)    ;
extern double pow   (double, double)    ;
extern double sqrt   (double)    ;
extern double fmod   (double, double)    ;





 

extern double infinity   (void)    ;
extern double nan   (void)    ;
extern int isnan   (double)    ;
extern int isinf   (double)    ;
extern int finite   (double)    ;
extern double copysign   (double, double)    ;
extern int ilogb   (double)    ;

extern double asinh   (double)    ;
extern double cbrt   (double)    ;
extern double nextafter   (double, double)    ;
extern double rint   (double)    ;
extern double scalbn   (double, int)    ;


extern double log1p   (double)    ;
extern double expm1   (double)    ;



extern double acosh   (double)    ;
extern double atanh   (double)    ;
extern double remainder   (double, double)    ;
extern double gamma   (double)    ;
extern double gamma_r   (double, int *)    ;
extern double lgamma   (double)    ;
extern double lgamma_r   (double, int *)    ;
extern double erf   (double)    ;
extern double erfc   (double)    ;
extern double y0   (double)    ;
extern double y1   (double)    ;
extern double yn   (int, double)    ;
extern double j0   (double)    ;
extern double j1   (double)    ;
extern double jn   (int, double)    ;



extern double hypot   (double, double)    ;


extern double cabs();
extern double drem   (double, double)    ;



 

extern float atanf   (float)    ;
extern float cosf   (float)    ;
extern float sinf   (float)    ;
extern float tanf   (float)    ;
extern float tanhf   (float)    ;
extern float frexpf   (float, int *)    ;
extern float modff   (float, float *)    ;
extern float ceilf   (float)    ;
extern float fabsf   (float)    ;
extern float floorf   (float)    ;


extern float acosf   (float)    ;
extern float asinf   (float)    ;
extern float atan2f   (float, float)    ;
extern float coshf   (float)    ;
extern float sinhf   (float)    ;
extern float expf   (float)    ;
extern float ldexpf   (float, int)    ;
extern float logf   (float)    ;
extern float log10f   (float)    ;
extern float powf   (float, float)    ;
extern float sqrtf   (float)    ;
extern float fmodf   (float, float)    ;


 

extern float infinityf   (void)    ;
extern float nanf   (void)    ;
extern int isnanf   (float)    ;
extern int isinff   (float)    ;
extern int finitef   (float)    ;
extern float copysignf   (float, float)    ;
extern int ilogbf   (float)    ;

extern float asinhf   (float)    ;
extern float cbrtf   (float)    ;
extern float nextafterf   (float, float)    ;
extern float rintf   (float)    ;
extern float scalbnf   (float, int)    ;
extern float log1pf   (float)    ;
extern float expm1f   (float)    ;


extern float acoshf   (float)    ;
extern float atanhf   (float)    ;
extern float remainderf   (float, float)    ;
extern float gammaf   (float)    ;
extern float gammaf_r   (float, int *)    ;
extern float lgammaf   (float)    ;
extern float lgammaf_r   (float, int *)    ;
extern float erff   (float)    ;
extern float erfcf   (float)    ;
extern float y0f   (float)    ;
extern float y1f   (float)    ;
extern float ynf   (int, float)    ;
extern float j0f   (float)    ;
extern float j1f   (float)    ;
extern float jnf   (int, float)    ;

extern float hypotf   (float, float)    ;

extern float cabsf();
extern float dremf   (float, float)    ;



 

extern int signgam;

 


struct __exception 



{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};


extern int matherr   (struct __exception *e)    ;




 








 
























 

enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};




extern enum __fdlibm_version  __fdlib_version ;









}


# 7 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\cmath" 2 3



#pragma interface "cmath"


extern "C++" {
# 38 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\cmath" 3


inline float  abs (float  x) { return fabs (x); }

inline double abs (double x) { return fabs (x); }


# 71 "C:\\cygnus\\cygwin-b20\\H-i586-cygwin32\\bin\\..\\lib\\gcc-lib\\i586-cygwin32\\egcs-2.91.57\\..\\..\\..\\..\\..\\include\\g++\\cmath" 3

inline long double abs (long double x) { return fabs (x); }

}  


# 2 "max_macro.cpp" 2




int main()
{
    int x, y;
    std::cout << "Enter x and y\n";
    std::cin >> x >> y;
    
    int r;
    { int adorable_x=( x ); int adorable_y=(  y );   r  = (adorable_x) > (adorable_y) ? (adorable_x) : (adorable_y); } ;
    cout << r << "\n" ;
    { int adorable_x=( --x ); int adorable_y=( --y );   r  = (adorable_x) > (adorable_y) ? (adorable_x) : (adorable_y); } ;
    cout << r << "\n" ;
    { int adorable_x=( x += y ); int adorable_y=(  ++y );   r  = (adorable_x) > (adorable_y) ? (adorable_x) : (adorable_y); } ;
    cout << r << "\n" ;
    int s = (r+=3);
    cout << s << "\n" ;
}
