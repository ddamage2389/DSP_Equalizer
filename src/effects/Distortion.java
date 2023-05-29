package effects;

public class Distortion extends Effect {
    private static final short UPPER_BOUND = 2500;
    private static final short LOWER_BOUND = -2500;

    public Distortion() {
    }

    public void setInputSampleStream(short[] inputAudioStream) {
        this.inputAudioStream = inputAudioStream;
    }

    @Override
    public synchronized short[] createEffect() {
        for (int i = 0; i < this.inputAudioStream.length; i++) {
            if (this.inputAudioStream[i] > UPPER_BOUND)
                this.inputAudioStream[i] = UPPER_BOUND;
            else if (this.inputAudioStream[i] < LOWER_BOUND)
                this.inputAudioStream[i] = LOWER_BOUND;
        }
        return this.inputAudioStream;
    }
}