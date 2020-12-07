t = 0:1/50:10-1/50;  
w=input('enter the value of w');
x = sin(w*t);
plot(t,x)
y = fft(x);     
f = (0:length(y)-1)*50/length(y);
plot(f,abs(y))
title('Magnitude')
n = length(x);                         
fshift = (-n/2:n/2-1)*(50/n);
yshift = fftshift(y);
plot(fshift,abs(yshift))
xnoise = x + 2.5*gallery('normaldata',size(t),4);
ynoise = fft(xnoise);
ynoiseshift = fftshift(ynoise);    
power = abs(ynoiseshift).^2/n; 
plot(fshift,power)
title('Power')
whaleFile = 'bluewhale.au';
[x,fs] = audioread(whaleFile);
whaleMoan = x(2.45e4:3.10e4);
t = 10*(0:1/fs:(length(whaleMoan)-1)/fs);

plot(t,whaleMoan)
xlabel('Time (seconds)')
ylabel('Amplitude')
xlim([0 t(end)])

m = length(whaleMoan); 
n = pow2(nextpow2(m));
y = fft(whaleMoan,n);        

f = (0:n-1)*(fs/n)/10; % frequency vector
power = abs(y).^2/n;   % power spectrum      
plot(f(1:floor(n/2)),power(1:floor(n/2)))
xlabel('Frequency')
ylabel('Power')